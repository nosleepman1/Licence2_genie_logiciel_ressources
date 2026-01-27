<?php require_once './actions/traitement.php' ?>

<div class="container m-5">
    <div class="row justify-content-center">

    <div class="col-8">
        <?php if (isset($success)): ?>
            <div class="alert alert-success"><?= $success ?></div>
        <?php endif; ?>
        
        <form method="POST">
            <div class="d-flex gap-5">
                <div class="mb-3">
                    <label for="Prenom" class="form-label">Prenom</label>
                    <input type="text" class="form-control <?= $prenomError ? 'is-invalid' : '' ?>" 
                           id="Prenom" name="prenom" value="<?= $_POST['prenom'] ?? '' ?>">
                    <div class="form-text text-danger"><?= $prenomError ?? '' ?></div>
                </div>

                <div class="mb-3">
                    <label for="Nom" class="form-label">Nom</label>
                    <input type="text" class="form-control <?= $nomError ? 'is-invalid' : '' ?>" 
                           id="Nom" name="nom" value="<?= $_POST['nom'] ?? '' ?>">
                    <div class="form-text text-danger"><?= $nomError ?? '' ?></div>
                </div>
            </div>

            <div class="d-flex gap-5">
                <div class="mb-3">
                    <label for="Email" class="form-label">Email</label>
                    <input type="email" class="form-control <?= $emailError ? 'is-invalid' : '' ?>" 
                           id="Email" name="email" value="<?= $_POST['email'] ?? '' ?>">
                    <div class="form-text text-danger"><?= $emailError ?? '' ?></div>
                </div>
                <div class="mb-3">
                    <label for="Telephone" class="form-label">Telephone</label>
                    <input type="tel" class="form-control <?= $numeroError ? 'is-invalid' : '' ?>" 
                           id="Telephone" name="telephone" value="<?= $_POST['telephone'] ?? '' ?>">
                    <div class="form-text text-danger"><?= $numeroError ?? '' ?></div>
                </div>
            </div>

            <div class="mb-3">
                <label for="Objet" class="form-label">Objet</label>
                <input type="text" class="form-control <?= $objetError ? 'is-invalid' : '' ?>" 
                       id="Objet" name="objet" value="<?= $_POST['objet'] ?? '' ?>">
                <div class="form-text text-danger"><?= $objetError ?? '' ?></div>
            </div>
            
            <div class="mb-3">
                <label for="Message" class="form-label">Message</label>
                <textarea class="form-control <?= $messageError ? 'is-invalid' : '' ?>" 
                          id="Message" placeholder="votre message" name="message"><?= $_POST['message'] ?? '' ?></textarea>
                <div class="form-text text-danger"><?= $messageError ?? '' ?></div>
            </div>
            
            <div class="mb-3 form-check">
                <p><b>Conditions d'utilisation : </b> Veuillez vérifier ces conditions pour continuer</p>
                <input type="checkbox" class="form-check-input" id="check" required>
                <label class="form-check-label" for="check">Accepter</label>
            </div>
            
            <button name="submit" type="submit" class="btn btn-primary">Soumettre</button>
        </form>
    </div>

    </div>
</div>